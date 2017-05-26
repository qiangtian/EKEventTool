//
//  EKEventModel.h
//  product1
//
//  Created by 西安旺豆电子 on 2017/5/11.
//  Copyright © 2017年 西安旺豆电子信息有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EKEventModel : NSObject

@property (nonatomic, strong) NSString *title;                          //标题
@property (nonatomic, strong) NSString *location;                       //地点
@property (nonatomic, strong) NSString *startDateStr;                   //开始时间
@property (nonatomic, strong) NSString *endDateStr;                     //结束时间
@property (nonatomic, assign) BOOL allDay;                              //是否全天
@property (nonatomic, strong) NSString *notes;                          //备注
@property (nonatomic, strong) NSString *alarmStr;                       //提醒

@end
