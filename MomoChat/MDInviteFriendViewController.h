//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDSNSShareControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MDSNSBindHelper, MDSNSShareControl, NSMutableArray, NSString, UIButton, UITableView;

@interface MDInviteFriendViewController : MDViewController <UITableViewDataSource, UITableViewDelegate, MDSNSShareControlDelegate>
{
    UITableView *table;
    NSMutableArray *groups;
    MDSNSShareControl *sharedOptionsView;
    MDSNSBindHelper *_bindHelper;
    UIButton *_inviteButton;
}

@property(retain, nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(retain, nonatomic) MDSNSBindHelper *bindHelper; // @synthesize bindHelper=_bindHelper;
@property(retain, nonatomic) MDSNSShareControl *sharedOptionsView; // @synthesize sharedOptionsView;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups;
@property(retain, nonatomic) UITableView *table; // @synthesize table;
- (void)didClickSharePlatform:(int)arg1;
- (void)currentStateAfterSelectingOptionsChagnged:(_Bool)arg1;
- (id)viewForShareSNSPlatform:(int)arg1;
- (void)inviteFriendsAndShareToSNSError:(id)arg1;
- (void)inviteFriendsAndShareToSNSFail:(id)arg1;
- (void)inviteFriendsAndShareToSNSSuccess:(id)arg1;
- (void)inviteFriendsAndShareToSNSWithOptions:(id)arg1;
- (void)handleInviteFriendSectionSelectedAtRow:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)returnItemClicked:(id)arg1;
- (void)setupNavBar;
- (id)headerViewOfInviteFriendSection;
- (id)cellOfRenren;
- (id)cellOfTencentWeibo;
- (id)cellOfSinaWeibo;
- (id)cellOfPhoneContact;
- (void)inviteButtonClicked:(id)arg1;
- (id)cellOfShareToSNS;
- (id)headerViewOfShareToSNSSection;
- (id)cellOfHelpFriend;
- (id)headerViewOfHelpFriendSection;
- (id)headerViewWithIconName:(id)arg1 title:(id)arg2;
- (void)setupTableViewSections;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
