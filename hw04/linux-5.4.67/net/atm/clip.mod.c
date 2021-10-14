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
	{ 0xc52a675c, "neigh_seq_next" },
	{ 0xf71c17fa, "neigh_seq_stop" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf5eb2cce, "register_atm_ioctl" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa8b80792, "dst_release" },
	{ 0xaa93d096, "__neigh_create" },
	{ 0xe31c4d93, "neigh_lookup" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x9c855ae9, "vcc_process_recv_queue" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9415ca79, "__module_get" },
	{ 0xbf85c806, "vcc_insert_socket" },
	{ 0xc6cbbc89, "capable" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0xb870db52, "atm_charge" },
	{ 0xb18156be, "skb_pull" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xc5850110, "printk" },
	{ 0xe6461a92, "neigh_update" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6168380e, "seq_putc" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x96848186, "scnprintf" },
	{ 0xc4142837, "seq_printf" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x45f2f1a7, "deregister_atm_ioctl" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf720a60b, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3785c132, "init_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xee5d0fe, "__icmp_send" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x15314fce, "consume_skb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb0ae44b0, "vcc_release_async" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce528778, "__neigh_for_each_release" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x230d29fa, "neigh_seq_start" },
	{ 0xee0c6453, "arp_tbl" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3e9b3478, "neigh_direct_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "844BAC33546DDAA06571D04");
