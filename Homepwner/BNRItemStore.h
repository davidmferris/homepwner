//
//  BNRItemStore.h
//  Homepwner
//
//  Created by AwesomenessTV Dev on 7/8/14.
//  Copyright (c) 2014 ___AwesomenessTV___. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BNRItem;

@interface BNRItemStore : NSObject

@property(nonatomic, readonly, copy)NSArray *allItems;

+ (instancetype)sharedStore;
-(BNRItem *)createItem;
@end
