//
//  NSMutableDictionary+safe.h
//  HJ
//
//  Created by bibibi on 15/7/20.
//  Copyright (c) 2015年 ihome. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary(safe)

- (void)safeSetObject:(id)aObj forKey:(id<NSCopying>)aKey;

@end
