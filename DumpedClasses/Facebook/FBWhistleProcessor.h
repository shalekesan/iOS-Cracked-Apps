//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBWhistleProcessor : NSObject
{
    // Error parsing type: {EventBase="_vptr$TimeoutManager"^^?"cobTimeouts_"{unique_ptr<folly::TimeoutManager::CobTimeouts, std::__1::default_delete<folly::TimeoutManager::CobTimeouts> >="__ptr_"{__compressed_pair<folly::TimeoutManager::CobTimeouts *, std::__1::default_delete<folly::TimeoutManager::CobTimeouts> >="__first_"^{CobTimeouts}}}"_vptr$DrivableExecutor"^^?"wheelTimer_"{unique_ptr<folly::HHWheelTimer, folly::DelayedDestruction::Destructor>="__ptr_"{__compressed_pair<folly::HHWheelTimer *, folly::DelayedDestruction::Destructor>="__first_"^{HHWheelTimer}}}"loopCallbacks_"{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>, void, void, void>="data_"{data_t="root_plus_size_"{root_plus_size="m_header"{default_header_holder<boost::intrusive::list_node_traits<void *> >="next_"^{list_node<void *>}"prev_"^{list_node<void *>}}}}}"runBeforeLoopCallbacks_"{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>, void, void, void>="data_"{data_t="root_plus_size_"{root_plus_size="m_header"{default_header_holder<boost::intrusive::list_node_traits<void *> >="next_"^{list_node<void *>}"prev_"^{list_node<void *>}}}}}"onDestructionCallbacks_"{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>, void, void, void>="data_"{data_t="root_plus_size_"{root_plus_size="m_header"{default_header_holder<boost::intrusive::list_node_traits<void *> >="next_"^{list_node<void *>}"prev_"^{list_node<void *>}}}}}"runOnceCallbacks_"^{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>, void, void, void>}"stop_"{atomic<bool>="__a_"AB}"loopThread_"{atomic<std::__1::__thread_id>="__a_"A{__thread_id}}"evb_"^{event_base}"queue_"{unique_ptr<folly::NotificationQueue<folly::Function<void ()> >, std::__1::default_delete<folly::NotificationQueue<folly::Function<void ()> > > >="__ptr_"{__compressed_pair<folly::NotificationQueue<folly::Function<void ()> > *, std::__1::default_delete<folly::NotificationQueue<folly::Function<void ()> > > >="__first_"^{NotificationQueue<folly::Function<void ()> >}}}"fnRunner_"{unique_ptr<folly::EventBase::FunctionRunner, std::__1::default_delete<folly::EventBase::FunctionRunner> >="__ptr_"{__compressed_pair<folly::EventBase::FunctionRunner *, std::__1::default_delete<folly::EventBase::FunctionRunner> >="__first_"^{FunctionRunner}}}"loopKeepAliveCount_"q"loopKeepAliveCountAtomic_"{atomic<long>="__a_"Aq}"loopKeepAliveActive_"B"maxLatency_"{duration<long long, std::__1::ratio<1, 1000000> >="__rep_"q}"avgLoopTime_"{SmoothLoopTime="expCoeff_"d"value_"d"oldBusyLeftover_"{duration<long long, std::__1::ratio<1, 1000000> >="__rep_"q}}"maxLatencyLoopTime_"{SmoothLoopTime="expCoeff_"d"value_"d"oldBusyLeftover_"{duration<long long, std::__1::ratio<1, 1000000> >="__rep_"q}}"maxLatencyCob_"{Function<void ()>="data_"(Data="big"^v"tiny"{type="__lx"[48C]})"call_"^?"exec_"^?}"enableTimeMeasurement_"B"nextLoopCnt_"Q"latestLoopCnt_"Q"startWork_"{time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >="__d_"{duration<long long, std::__1::ratio<1, 1000000000> >="__rep_"q}}"invokingLoop_"B"observer_"{shared_ptr<folly::EventBaseObserver>="__ptr_"^{EventBaseObserver}"__cntrl_"^{__shared_weak_count}}"observerSampleCount_"I"executionObserver_"^{ExecutionObserver}"name_"{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >="__r_"{__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >="__first_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"Q}"__s"{__short="__data_"[23c]""{?="__size_"C}}"__r"{__raw="__words"[3Q]})}}}"onDestructionCallbacksMutex_"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"localStorage_"{unordered_map<unsigned long long, std::__1::shared_ptr<void>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::shared_ptr<void> > > >="__table_"{__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> > > >="__bucket_list_"{unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *> > >="__ptr_"{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *> > >="__first_"^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *>}"__second_"{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *> >="__data_"{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *> >="__first_"Q}}}}"__p1_"{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> > >="__first_"{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *>="__next_"^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *>}}}"__p2_"{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::hash<unsigned long long>, true> >="__first_"Q}"__p3_"{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::equal_to<unsigned long long>, true> >="__first_"f}}}"localStorageToDtor_"{unordered_set<folly::detail::EventBaseLocalBaseBase *, std::__1::hash<folly::detail::EventBaseLocalBaseBase *>, std::__1::equal_to<folly::detail::EventBaseLocalBaseBase *>, std::__1::allocator<folly::detail::EventBaseLocalBaseBase *> >="__table_"{__hash_table<folly::detail::EventBaseLocalBaseBase *, std::__1::hash<folly::detail::EventBaseLocalBaseBase *>, std::__1::equal_to<folly::detail::EventBaseLocalBaseBase *>, std::__1::allocator<folly::detail::EventBaseLocalBaseBase *> >="__bucket_list_"{unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *> > >="__ptr_"{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *> > >="__first_"^^{__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *>}"__second_"{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *> >="__data_"{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *> >="__first_"Q}}}}"__p1_"{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *>, std::__1::allocator<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> > >="__first_"{__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *>="__next_"^{__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *>}}}"__p2_"{__compressed_pair<unsigned long, std::__1::hash<folly::detail::EventBaseLocalBaseBase *> >="__first_"Q}"__p3_"{__compressed_pair<float, std::__1::equal_to<folly::detail::EventBaseLocalBaseBase *> >="__first_"f}}}"virtualEventBaseInitFlag_"{once_flag="called_"{atomic<bool>="__a_"AB}"mutex_"{SharedMutexImpl<false, void, std::atomic, false>="state_"{Futex<std::atomic>="__a_"AI}}}"virtualEventBase_"{unique_ptr<folly::VirtualEventBase, std::__1::default_delete<folly::VirtualEventBase> >="__ptr_"{__compressed_pair<folly::VirtualEventBase *, std::__1::default_delete<folly::VirtualEventBase> >="__first_"^{VirtualEventBase}}}}, name: _eventBase
}

+ (id)instance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)whistleThreadMain;
-     // Error parsing type: ^{EventBase=^^?{unique_ptr<folly::TimeoutManager::CobTimeouts, std::__1::default_delete<folly::TimeoutManager::CobTimeouts> >={__compressed_pair<folly::TimeoutManager::CobTimeouts *, std::__1::default_delete<folly::TimeoutManager::CobTimeouts> >=^{CobTimeouts}}}^^?{unique_ptr<folly::HHWheelTimer, folly::DelayedDestruction::Destructor>={__compressed_pair<folly::HHWheelTimer *, folly::DelayedDestruction::Destructor>=^{HHWheelTimer}}}{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>, void, void, void>={data_t={root_plus_size={default_header_holder<boost::intrusive::list_node_traits<void *> >=^{list_node<void *>}^{list_node<void *>}}}}}{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>, void, void, void>={data_t={root_plus_size={default_header_holder<boost::intrusive::list_node_traits<void *> >=^{list_node<void *>}^{list_node<void *>}}}}}{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>, void, void, void>={data_t={root_plus_size={default_header_holder<boost::intrusive::list_node_traits<void *> >=^{list_node<void *>}^{list_node<void *>}}}}}^{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>, void, void, void>}{atomic<bool>=AB}{atomic<std::__1::__thread_id>=A{__thread_id}}^{event_base}{unique_ptr<folly::NotificationQueue<folly::Function<void ()> >, std::__1::default_delete<folly::NotificationQueue<folly::Function<void ()> > > >={__compressed_pair<folly::NotificationQueue<folly::Function<void ()> > *, std::__1::default_delete<folly::NotificationQueue<folly::Function<void ()> > > >=^{NotificationQueue<folly::Function<void ()> >}}}{unique_ptr<folly::EventBase::FunctionRunner, std::__1::default_delete<folly::EventBase::FunctionRunner> >={__compressed_pair<folly::EventBase::FunctionRunner *, std::__1::default_delete<folly::EventBase::FunctionRunner> >=^{FunctionRunner}}}q{atomic<long>=Aq}B{duration<long long, std::__1::ratio<1, 1000000> >=q}{SmoothLoopTime=dd{duration<long long, std::__1::ratio<1, 1000000> >=q}}{SmoothLoopTime=dd{duration<long long, std::__1::ratio<1, 1000000> >=q}}{Function<void ()>=(Data=^v{type=[48C]})^?^?}BQQ{time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >={duration<long long, std::__1::ratio<1, 1000000000> >=q}}B{shared_ptr<folly::EventBaseObserver>=^{EventBaseObserver}^{__shared_weak_count}}I^{ExecutionObserver}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{unordered_map<unsigned long long, std::__1::shared_ptr<void>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::shared_ptr<void> > > >={__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> > > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::hash<unsigned long long>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<void> >, std::__1::equal_to<unsigned long long>, true> >=f}}}{unordered_set<folly::detail::EventBaseLocalBaseBase *, std::__1::hash<folly::detail::EventBaseLocalBaseBase *>, std::__1::equal_to<folly::detail::EventBaseLocalBaseBase *>, std::__1::allocator<folly::detail::EventBaseLocalBaseBase *> >={__hash_table<folly::detail::EventBaseLocalBaseBase *, std::__1::hash<folly::detail::EventBaseLocalBaseBase *>, std::__1::equal_to<folly::detail::EventBaseLocalBaseBase *>, std::__1::allocator<folly::detail::EventBaseLocalBaseBase *> >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *>, std::__1::allocator<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> > >={__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *>=^{__hash_node_base<std::__1::__hash_node<folly::detail::EventBaseLocalBaseBase *, void *> *>}}}{__compressed_pair<unsigned long, std::__1::hash<folly::detail::EventBaseLocalBaseBase *> >=Q}{__compressed_pair<float, std::__1::equal_to<folly::detail::EventBaseLocalBaseBase *> >=f}}}{once_flag={atomic<bool>=AB}{SharedMutexImpl<false, void, std::atomic, false>={Futex<std::atomic>=AI}}}{unique_ptr<folly::VirtualEventBase, std::__1::default_delete<folly::VirtualEventBase> >={__compressed_pair<folly::VirtualEventBase *, std::__1::default_delete<folly::VirtualEventBase> >=^{VirtualEventBase}}}}16@0:8, name: eventBase
- (id)init;

@end
