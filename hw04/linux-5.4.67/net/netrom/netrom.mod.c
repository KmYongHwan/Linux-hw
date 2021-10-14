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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0xc46bedbf, "proc_create_seq_private" },
	{ 0xf9276e8a, "skb_append" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x66984dba, "send_sig" },
	{ 0x2292635f, "sk_stop_timer" },
	{ 0x4c764fdc, "sock_gettstamp" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x7a42bc96, "dev_get_by_name" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7b621fdf, "ax25_linkfail_release" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x473c7618, "ax25_register_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x2825d345, "sock_efree" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x46612729, "sk_alloc" },
	{ 0xba312d7b, "current_task" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xa35298ac, "ax25_listen_release" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x242852b9, "ax25_uid_policy" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3785c132, "init_net" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xec6415d1, "ax25_send_frame" },
	{ 0xbb9c728c, "proto_register" },
	{ 0xd58732a8, "sk_reset_timer" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1865e519, "proto_unregister" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8b90c94, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x8ede9e26, "ax25_protocol_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe188a7ea, "ax25_listen_register" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14cecd59, "ax25_display_timer" },
	{ 0xc1444946, "ax25cmp" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xee02e420, "ax25_findbyuid" },
	{ 0x621eb9ef, "ax25_linkfail_register" },
	{ 0x53dea1ff, "ax2asc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6fe64a49, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "61D8A91EB30CDB6064AB91B");
