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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x66e9f04d, "release_sock" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0x4c97001f, "rds_trans_register" },
	{ 0xcdf2263e, "kernel_sendmsg" },
	{ 0x8855c705, "sock_create_lite" },
	{ 0x6aa56670, "ipv6_chk_addr" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xfa5e9d77, "rds_conn_path_drop" },
	{ 0x40aebdcf, "sock_release" },
	{ 0x65194f5e, "rds_inc_path_init" },
	{ 0x36087aa4, "rds_stats" },
	{ 0xa740e4ba, "rds_send_ping" },
	{ 0xc65adb95, "rds_conn_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2b22a463, "sock_create_kern" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x89531fc7, "rds_recv_incoming" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x90e7b495, "kernel_setsockopt" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x416b2497, "rds_connect_path_complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x3a9f473b, "pskb_extract" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3d669121, "inet_addr_type" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6b7908b1, "rds_info_register_func" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc6885e1c, "rds_inc_put" },
	{ 0x85e4e520, "rds_stats_info_copy" },
	{ 0xc2dab779, "rds_info_copy" },
	{ 0x73d0e3ae, "kernel_sock_shutdown" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0x880d8f99, "rds_send_path_drop_acked" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3785c132, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3e137813, "rds_conn_destroy" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa467af, "rds_wq" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x9415ca79, "__module_get" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x2708b4a6, "rds_info_deregister_func" },
	{ 0x44c94a6c, "rds_trans_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x45a4781e, "rds_addr_cmp" },
	{ 0xd45edf36, "rds_conn_path_connect_if_down" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x6576d907, "tcp_read_sock" },
	{ 0x9186d6c2, "rds_send_path_reset" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xfd22dd56, "rds_cong_map_updated" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x200b2041, "in6addr_any" },
};

MODULE_INFO(depends, "rds");


MODULE_INFO(srcversion, "6F50BE31E420941A9822C24");
