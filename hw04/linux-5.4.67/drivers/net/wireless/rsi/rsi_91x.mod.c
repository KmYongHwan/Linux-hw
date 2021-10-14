#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x5d6a04c4, "ieee80211_rx_irqsafe" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x85acbdf0, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdcf29e6f, "ieee80211_scan_completed" },
	{ 0x967a5e95, "wiphy_rfkill_start_polling" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0x57cf91ab, "ieee80211_ready_on_channel" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x6f3c3906, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9c8bdd4a, "ieee80211_free_txskb" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8506c01c, "ieee80211_remain_on_channel_expired" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x380bf8a8, "wiphy_rfkill_stop_polling" },
	{ 0xe3a53f4c, "sort" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x92129d68, "wiphy_to_ieee80211_hw" },
	{ 0xa8baf7a6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1e1b97f, "wiphy_rfkill_set_hw_state" },
	{ 0x22a17cbd, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x17e93065, "ieee80211_wake_queue" },
	{ 0xcf2fd8e3, "ieee80211_generic_frame_duration" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1b80b66a, "ieee80211_start_tx_ba_session" },
	{ 0x71deb539, "request_firmware" },
	{ 0x40d52ed1, "ieee80211_probereq_get" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xede283d, "release_firmware" },
	{ 0x7e30f9b0, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xe00ee1b7, "rsi_bt_ops" },
	{ 0xf5157847, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,cfg80211,btrsi");


MODULE_INFO(srcversion, "74D35424698F48EAC7BEC80");
