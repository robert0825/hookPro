//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class UIButton;

@interface CommuneReportViewController : JDViewController
{
    UIButton *commitButton;
    long long selectionCount;
}

@property(nonatomic) long long selectionCount; // @synthesize selectionCount;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)popCurrentViewController;
- (void)reportQuestion:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end
