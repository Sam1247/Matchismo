//
//  Card.m
//  Matchismo
//
//  Created by Abdalla Elsaman on 6/21/19.
//  Copyright © 2019 Dumbies. All rights reserved.
//

#import "Card.h"

@interface Card()



@end

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    return score;
}


@end
