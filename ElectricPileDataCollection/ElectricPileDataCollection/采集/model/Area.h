//
//  Area.h
//  ElectricPileDataCollection
//
//  Created by 陈行 on 16/4/11.
//  Copyright © 2016年 陈行. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Area : NSObject

@property (nonatomic, copy) NSString *letter;

@property (nonatomic, assign) NSInteger districtId;

@property (nonatomic, copy) NSString *createdDate;

@property (nonatomic, assign) NSInteger Id;

@property (nonatomic, copy) NSString *sequence;

@property (nonatomic, assign) NSInteger ver;

@property (nonatomic, copy) NSString *createdBy;

@property (nonatomic, copy) NSString *lastUpdatedBy;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *lastUpdatedDate;

+ (instancetype)areaWithDict:(NSDictionary *)dict;

@end
