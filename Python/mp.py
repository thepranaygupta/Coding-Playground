import matplotlib.pyplot as plt


plt.plot([1,2,3,4],[1,4,9,16])
#writing the x and y axis quadrants for plotting the graph with all points joined
#if either x or y values are absent then pythonpip generates the valules on its own

plt.xlabel("Time")
plt.ylabel("Velocity")
#for giving labels to the quadrants ex : V-T graph

plt.plot([1,2],[3,4],'ro')
#only red dots will be there will the points joined by lines

plt.plot([1,2],[3,4],'ro--')
#points will be joined by dotted line and not continous line

plt.plot([1,2],[3,4],'bs')
#points will be tiny blue scores

plt.plot([1,2],[3,4],'g^')
#points will be green triangles

#for plotting a list : plt.plot(list_name)