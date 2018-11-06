# EKEventTool
Operating calendar events
需要添加plistPrivacy - Calendars Usage Description
/**
这个单例是在项目中用到的功能，创建日历提醒事件到系统日历中，主要是 添加、删除 、和删除所有创建的事件 功能，如果需要使用的
话，可能需要自己修改。欢迎提出修改和优化意见。大家一起学习。
我的邮箱 804729713@qq.com
*/



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

/**
 *  删除事件
 */
- (BOOL)deleteEvent:(EKEventModel *)eventModel;

/**
 *  删除用户创建的所有事件
 */
- (void)deleteAllCreatedEvent;


 //    **********************************************
 
/**
  有两种查到日历事件的方法，一，是根据条件的相同，二，是根据创建日历的唯一标识eventIdentifier
  项目里用条件识别单一日历创建和删除功能，因为需要在服务器获得事件数据，并没有eventIdentifier，
  在删除所有的时候，是将已经保存到本地的所有的事件，删除，这样就只需存储到本地所有事件的eventIdentifier即可。
/**
 *  使用 identifier删除,
 */
-(void)deleteWithIdentifier:(NSString *)identifier 


