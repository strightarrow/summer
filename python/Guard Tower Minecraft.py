# Code by Connor Killman
# Lines 3-11 and 90-164 Curtesy of C.W. Coleman
# Base project format.
# 127.0.0.1 is locahost (the computer you are working on)
from mcpi.minecraft import Minecraft
from mcpi import block
from time import sleep

mc = Minecraft.create("10.183.0.105", 4711)
# This sets the x,y and z location to set blocks.
x, y, z = mc.player.getPos()        

#Creates Guard Tower With a Computer Science Logo at Base

# Clear with ait (air = 0)
air = 0
b=1
#Tower Base
mc.setBlocks(x-8,y, z, x+8, y+12, z+8,air)
mc.setBlocks(x-2,y, z+4, x+2, y+10, z+8,b+97)
#Tower Platform 
mc.setBlocks(x-3,y+10,z+3,x+3,y+10,z+3,b+97)
mc.setBlocks(x-4,y+10,z+2,x+4,y+11,z+2,b+97)
mc.setBlocks(x-3,y+10,z+9,x+3,y+10,z+9,b+97)
mc.setBlocks(x-4,y+10,z+10,x+4,y+11,z+10,b+97)
mc.setBlocks(x-3,y+10,z+4,x-3,y+10,z+8,b+97)
mc.setBlocks(x-4,y+10,z+3,x-4,y+11,z+9,b+97)
mc.setBlocks(x+3,y+10,z+4,x+3,y+10,z+8,b+97)
mc.setBlocks(x+4,y+10,z+3,x+4,y+11,z+9,b+97)
#Platform Mini-Step
mc.setBlocks(x-3,y+11,z+9,x+3,y+11,z+9,b+43)
mc.setBlocks(x-3,y+11,z+3,x+3,y+11,z+3,b+43)
mc.setBlocks(x-3,y+11,z+4,x-3,y+11,z+8,b+43)
mc.setBlocks(x+3,y+11,z+4,x+3,y+11,z+8,b+43)
#Tower Defence Spikes (Left)
mc.setBlocks(x+4,y+12,z+2,x+4,y+12,z+2,b+97)
mc.setBlocks(x+4,y+12,z+4,x+4,y+12,z+4,b+97)
mc.setBlocks(x+4,y+12,z+6,x+4,y+12,z+6,b+97)
mc.setBlocks(x+4,y+12,z+8,x+4,y+12,z+8,b+97)
mc.setBlocks(x+4,y+12,z+10,x+4,y+12,z+10,b+97)
#Tower Defence Spikes (Right)
mc.setBlocks(x-4,y+12,z+2,x-4,y+12,z+2,b+97)
mc.setBlocks(x-4,y+12,z+4,x-4,y+12,z+4,b+97)
mc.setBlocks(x-4,y+12,z+6,x-4,y+12,z+6,b+97)
mc.setBlocks(x-4,y+12,z+8,x-4,y+12,z+8,b+97)
mc.setBlocks(x-4,y+12,z+10,x-4,y+12,z+10,b+97)
#Tower Defence Spikes (Front)
mc.setBlocks(x-4,y+12,z+2,x-4,y+12,z+2,b+97)
mc.setBlocks(x-2,y+12,z+2,x-2,y+12,z+2,b+97)
mc.setBlocks(x,y+12,z+2,x,y+12,z+2,b+97)
mc.setBlocks(x+2,y+12,z+2,x+2,y+12,z+2,b+97)
mc.setBlocks(x+4,y+12,z+2,x+4,y+12,z+2,b+97)
#Tower Defence Spikes (Back)
mc.setBlocks(x-4,y+12,z+10,x-4,y+12,z+10,b+97)
mc.setBlocks(x-2,y+12,z+10,x-2,y+12,z+10,b+97)
mc.setBlocks(x,y+12,z+10,x,y+12,z+10,b+97)
mc.setBlocks(x+2,y+12,z+10,x+2,y+12,z+10,b+97)
mc.setBlocks(x+4,y+12,z+10,x+4,y+12,z+10,b+97)
#Hollow Inside of Tower
mc.setBlocks(x-1,y, z+5, x+1, y+9, z+7,air)
mc.setBlocks(x+1,y, z+5, x+1, y+10, z+7,air)
mc.setBlocks(x,y, z+5, x, y+10, z+5,air)
mc.setBlocks(x,y, z+6, x, y+10, z+6,b+97)
mc.setBlocks(x,y, z+4, x, y+1, z+4,air)
#Stairs
mc.setBlocks(x+1,y, z+5, x+1, y, z+5,b+97)
mc.setBlocks(x+1,y+1, z+6, x+1, y+1, z+6,b+97)
mc.setBlocks(x+1,y+2, z+7, x+1, y+2, z+7,b+97)
mc.setBlocks(x,y+3, z+7, x, y+3, z+7,b+97)
mc.setBlocks(x-1,y+4, z+7, x-1, y+4, z+7,b+97)
mc.setBlocks(x-1,y+5, z+6, x-1, y+5, z+6,b+97)
mc.setBlocks(x-1,y+6, z+5, x-1, y+6, z+5,b+97)
mc.setBlocks(x,y+7, z+5, x, y+7, z+5,b+97)
mc.setBlocks(x+1,y+8, z+5, x+1, y+8, z+5,b+97)
mc.setBlocks(x+1,y+9, z+6, x+1, y+9, z+6,b+97)
mc.setBlocks(x+1,y+10, z+7, x+1, y+10, z+7,b+97)

#C Letter
mc.setBlocks(x+4,y,z,x+7,y+8,z+5,air)
mc.setBlocks(x+4,y,z+4,x+6,y,z+4,b+40)
mc.setBlocks(x+4,y+6,z+4,x+6,y+6,z+4,b+40)
mc.setBlocks(x+7,y+1,z+4,x+7,y+5,z+4,b+40)
#S Letter
mc.setBlocks(x-4,y,z,x-7,y+8,z+5,air)
mc.setBlocks(x-4,y,z+4,x-7,y,z+4,b+40)
mc.setBlocks(x-4,y+3,z+4,x-7,y+3,z+4,b+40)
mc.setBlocks(x-4,y+6,z+4,x-7,y+6,z+4,b+40)
mc.setBlocks(x-7,y+1,z+4,x-7,y+2,z+4,b+40)
mc.setBlocks(x-4,y+4,z+4,x-4,y+5,z+4,b+40)

# multiple line comment
"""
AIR                   0
STONE                 1
GRASS                 2
DIRT                  3
COBBLESTONE           4
WOOD_PLANKS           5
SAPLING               6
BEDROCK               7
WATER_FLOWING         8
WATER                 8
WATER_STATIONARY      9
LAVA_FLOWING         10
LAVA                 10
LAVA_STATIONARY      11
SAND                 12
GRAVEL               13
GOLD_ORE             14
IRON_ORE             15
COAL_ORE             16
WOOD                 17
LEAVES               18
GLASS                20
LAPIS_LAZULI_ORE     21
LAPIS_LAZULI_BLOCK   22
SANDSTONE            24
BED                  26
COBWEB               30
GRASS_TALL           31
WOOL                 35
FLOWER_YELLOW        37
FLOWER_CYAN          38
MUSHROOM_BROWN       39
MUSHROOM_RED         40
GOLD_BLOCK           41
IRON_BLOCK           42
STONE_SLAB_DOUBLE    43
STONE_SLAB           44
BRICK_BLOCK          45
TNT                  46
BOOKSHELF            47
MOSS_STONE           48
OBSIDIAN             49
TORCH                50
FIRE                 51
STAIRS_WOOD          53
CHEST                54
DIAMOND_ORE          56
DIAMOND_BLOCK        57
CRAFTING_TABLE       58
FARMLAND             60
FURNACE_INACTIVE     61
FURNACE_ACTIVE       62
DOOR_WOOD            64
LADDER               65
STAIRS_COBBLESTONE   67
DOOR_IRON            71
REDSTONE_ORE         73
SNOW                 78
ICE                  79
SNOW_BLOCK           80
CACTUS               81
CLAY                 82
SUGAR_CANE           83
FENCE                85
GLOWSTONE_BLOCK      89
BEDROCK_INVISIBLE    95
STONE_BRICK          98
GLASS_PANE          102
MELON               103
FENCE_GATE          107
GLOWING_OBSIDIAN    246
NETHER_REACTOR_CORE 247
"""
