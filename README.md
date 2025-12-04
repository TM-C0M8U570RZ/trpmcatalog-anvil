# trpmcatalog-anvil
Merge Pokémon SV mods that modify the TRPMCATALOG file

## WARNING!!! This software was made by a furry who looks like Tobey Maguire!!!!!
### We don't bully furries in 2025 unless you're a Nintendo Ninja (All Patreon raids except the Yuzu one targeted furries)

I made this tool as a good way to collab on mass modpacks that modify the .trpmcatalog file.  This allows team members to be independently assigned tasks as the leader handles merges.  

## ONLY USE THIS FOR NSFW MODS IN PLACES THAT ALLOW IT!!!!!  MOST MAINSTREAM SERVERS DON'T!!!!!

If you want a server that allows it, the only one I know of besides literal p-word servers is my own (only in dedicated channels tho):
https://discord.gg/xkT2Cpv3nE

The correct folder structure for mods is:

`mod1/romfs/pokemon/catalog/catalog/poke_resource_table.trpmcatalog`

`mod2/romfs/pokemon/catalog/catalog/poke_resource_table.trpmcatalog`

In the file picker, select the `romfs` folder.  

# BUILDING

To build, you need to install the flatbuffers library as well as Qt.  Open the CMakeLists.txt in Qt Creator and click the build button.  
