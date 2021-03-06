//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AQGridViewUpdateItem : NSObject
{
    unsigned int _index;
    unsigned int _newIndex;
    int _action;
    int _animation;
    int _offset;
}

@property(nonatomic) int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) int animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) unsigned int newIndex; // @synthesize newIndex=_newIndex;
@property(readonly, nonatomic) unsigned int originalIndex; // @synthesize originalIndex=_index;
@property(readonly, nonatomic) unsigned int index;
- (int)inverseCompare:(id)arg1;
- (int)compare:(id)arg1;
- (id)description;
- (id)initWithIndex:(unsigned int)arg1 action:(int)arg2 animation:(int)arg3;

@end

