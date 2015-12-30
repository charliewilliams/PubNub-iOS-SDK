#import <Foundation/Foundation.h>


/**
 @brief      Class describe real-time event debug information.
 @discussion Real-time events on subscribed channels arrive in envelop which is full of debug
             information which is useful during system reliability tests and issues debugging.

 @author Sergey Mamontov
 @since 3.8.0
 @copyright © 2009-15 PubNub Inc.
 */
@interface PNSubscribeEventInformation : NSObject


///------------------------------------------------
/// @name Information
///------------------------------------------------

/**
 @brief  Stores reference on shard identifier on which event has been stored.
 */
@property (nonatomic, readonly, copy) NSString *shardIdentifier;

/**
 @brief  Stores reference on numeric representation of enabled debug flags.
 */
@property (nonatomic, readonly, copy) NSNumber *debugFlags;

/**
 @brief  Stores reference on identifier of client which sent message (set only for publish).
 */
@property (nonatomic, readonly, copy) NSString *senderIdentifier;

/**
 @Brief  Stores reference on sequence nubmer of published messages (clients keep track of their
         own value locally).
 */
@property (nonatomic, readonly, copy) NSNumber *sequenceNumber;

/**
 @brief  Stores reference on key under which stored application's subscribe key.
 */
@property (nonatomic, readonly, copy) NSString *subscribeKey;

/**
 @brief  Stores reference on representation of event replication map (region based).
 */
@property (nonatomic, readonly, copy) NSNumber *replicationMap;

/**
 @brief  Stores reference on boolean flag which tell whether message should be stored in memory
         or removed after delivering.
 */
@property (nonatomic, readonly, assign)BOOL shouldEatAfterReading;

/**
 @brief  Stores reference on user-provided (during publish) meta-data which will be taken into
         account by filtering algorithms.
 */
@property (nonatomic, readonly, copy) NSDictionary *meta;

/**
 @brief  Stores reference information about waypoints.
 */
@property (nonatomic, readonly, copy) NSArray *waypoints;


///------------------------------------------------
/// @name Initialization and Configuration
///------------------------------------------------

/**
 @brief  Construct and configure real-time event debug information instance.

 @param payload  Event envelop dictionary which contain even delivery debug information.

 @return Configured and ready to use subscribe event information instance.

 @since 3.8.0
 */
+ (instancetype)subscribeEventInformationWithPayload:(NSDictionary *)payload;

#pragma mark -


@end
