//
//  PlayingCard.h
//  Matchismo
//
//  Created by Abdalla Elsaman on 6/21/19.
//  Copyright © 2019 Dumbies. All rights reserved.
//

#import "Card.h"

NS_ASSUME_NONNULL_BEGIN

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;


@end

NS_ASSUME_NONNULL_END
