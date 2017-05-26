//
//  EKEventTool.h
//  product1
//
//  Created by 西安旺豆电子 on 2017/5/11.
//  Copyright © 2017年 西安旺豆电子信息有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EventKit/EventKit.h>
#import "EKEventModel.h"

@interface EKEventTool : NSObject



+ (instancetype)sharedEventTool;


/**
 创建日历事件

 @param title 标题
 @param location 地点
 @param startDateStr 开始时间
 @param endDateStr 结束时间
 @param allDay 是否全天
 @param notes 备注
 @param alarmStr 提醒时间
 */
- (void)createEventWithEventModel:(EKEventModel *)eventModel;


//删除事件必须 之前创建过，只能删除通过工具创建的事件

/**
 *  删除事件
 */
- (BOOL)deleteEvent:(EKEventModel *)eventModel;

/**
 *  删除用户创建的所有事件
 */
- (void)deleteAllCreatedEvent;


@end
