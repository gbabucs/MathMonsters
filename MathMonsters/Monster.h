//
//  Monster.h
//  MathMonsters
//
//  Created by Transferred on 1/8/13.
//  Copyright (c) 2013 Designated Nerd Software. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    Blowgun = 0,
    NinjaStar,
    Fire,
    Sword,
    Smoke,
} Weapon;

@interface Monster : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *description;
@property (nonatomic, strong) NSString *iconName;
@property (nonatomic, assign) Weapon preferredWayToKill;

//Factory method to create new monsters
+(Monster *)newMonsterWithName:(NSString *)name description:(NSString *)description iconName:(NSString *)iconName preferredWayToKill:(Weapon)preferredWayToKill;

@end
