//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TaoPasswordShareActionDelegate;

@interface TPShareHandler : NSObject
{
    id <TaoPasswordShareActionDelegate> _delegate;	// 8 = 0x8
}

@property(retain, nonatomic) id <TaoPasswordShareActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareWithContent:(id)arg1 toTarget:(unsigned long long)arg2;

@end
