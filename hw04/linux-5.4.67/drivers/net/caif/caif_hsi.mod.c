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
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x15314fce, "consume_skb" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xba312d7b, "current_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf04187ce, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc5850110, "printk" },
	{ 0xdd4dafc6, "netdev_state_change" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A7F751B58A7CEED95F4B388");
