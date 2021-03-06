//
//  ToxManager+Private.h
//  Antidote
//
//  Created by Dmitry Vorobyov on 15.08.14.
//  Copyright (c) 2014 dvor. All rights reserved.
//

#import "ToxManager.h"
#import "ToxManagerAvatars.h"
#import "ToxManagerChats.h"
#import "ToxManagerFiles.h"
#import "ToxManagerFriends.h"

@interface ToxManager()
{
    void *kIsOnToxManagerQueue;
}

@property (assign, nonatomic, readonly) Tox *tox;

@property (strong, nonatomic, readonly) dispatch_queue_t queue;
@property (strong, nonatomic, readonly) dispatch_queue_t toxDoQueue;

@property (strong, nonatomic) dispatch_source_t timer;
@property (assign, nonatomic) uint32_t timerMillisecondsUpdateInterval;

@property (assign, nonatomic) BOOL isConnected;

@property (strong, nonatomic, readonly) ToxManagerAvatars *managerAvatars;
@property (strong, nonatomic, readonly) ToxManagerChats *managerChats;
@property (strong, nonatomic, readonly) ToxManagerFiles *managerFiles;
@property (strong, nonatomic, readonly) ToxManagerFriends *managerFriends;

@property (strong, nonatomic, readwrite) ToxFriendsContainer *friendsContainer;

- (void)qSaveTox;
- (NSString *)qClientId;

- (BOOL)isOnToxManagerQueue;

@end

