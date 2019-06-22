//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Abdalla Elsaman on 6/22/19.
//  Copyright © 2019 Dumbies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Deck.h"

NS_ASSUME_NONNULL_BEGIN

@interface CardMatchingGame : NSObject

// designated initializer (compiler doesn't know!)
- (instancetype)initWithCount:(NSUInteger)count usingDeck:(Deck *)deck;

- (void)choseCardAtIndex:(NSInteger)index;

- (Card *)cardAtIndex:(NSInteger)index; 

@property (nonatomic, readonly) NSInteger score;




@end

NS_ASSUME_NONNULL_END
