//
//  Monster.m
//  MathMonsters
//
//  Created by Transferred on 1/8/13.
//  Copyright (c) 2013 Designated Nerd Software. All rights reserved.
//

#import "Monster.h"

@implementation Monster

+(Monster *)newMonsterWithName:(NSString *)name description:(NSString *)description iconName:(NSString *)iconName preferredWayToKill:(Weapon)preferredWayToKill
{
    Monster *monster = [[Monster alloc] init];
    monster.name = name;
    monster.description = description;
    monster.iconName = iconName;
    monster.preferredWayToKill = preferredWayToKill;
    
    return monster;
}

@end
