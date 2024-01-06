from collections import deque

def g_lights(n, lights, switches):
  """
  Finds the minimum number of switches to turn off all lights.

  Args:
    n: The number of lights.
    lights: A string representing the initial state of the lights.
    switches: A list of integers representing the switches and their effects.

  Returns:
    A tuple containing the minimum number of switches and the list of switches,
    or (-1, []) if it is impossible to turn off all lights.
  """
  
  # Create a graph to represent the connections between lights and switches.
  graph = [[False for _ in range(n)] for _ in range(n)]
  for i, switch_effect in enumerate(switches):
    graph[i][i] = True
    graph[i][switch_effect - 1] = True

  # Use a DFS to find all connected components.
  visited = set()
  components = []
  for i in range(n):
    if i not in visited:
      component = set()
      dfs(i, graph, visited, component)
      components.append(component)

  # Check if any component has all lights on.
  for component in components:
    all_on = True
    for light in component:
      if lights[light] == "0":
        all_on = False
        break
    if all_on:
      return (-1, [])

  # Use BFS to find the shortest path to turn off all lights in each component.
  min_switches = float("inf")
  switch_sequence = None
  for component in components:
    queue = deque([(light, 0) for light in component])
    seen = set()
    while queue:
      light, switches = queue.popleft()
      if light in seen:
        continue
      seen.add(light)
      if lights[light] == "0":
        if switches < min_switches:
          min_switches = switches
          switch_sequence = [i + 1 for i in seen]
        break
      for neighbor in graph[light]:
        if neighbor in component and neighbor not in seen:
          queue.append((neighbor, switches + 1))

  return (min_switches, switch_sequence)

def dfs(node, graph, visited, component):
  visited.add(node)
  component.add(node)
  for neighbor in graph[node]:
    if neighbor not in visited:
      dfs(neighbor, graph, visited, component)

def main():
  t = int(input())
  for _ in range(t):
    n = int(input())
    lights = input()
    switches = [int(x) for x in input().split()]
    min_switches, switch_sequence = g_lights(n, lights, switches)
    if min_switches == -1:
      print(-1)
    else:
      print(min_switches)
      print(*switch_sequence)

if __name__ == "__main__":
  main()
