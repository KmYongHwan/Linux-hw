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
	{ 0x23cbb4bf, "fc_linkup" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x35db28d0, "bus_register" },
	{ 0x9a9bc01d, "fc_exch_init" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x67bfd661, "fc_rport_create" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xb0ddd5a1, "fc_rport_flush_queue" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xd3a6ffd2, "fc_seq_els_rsp_send" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x7a42bc96, "dev_get_by_name" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x90a46d90, "fc_fcp_init" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc8bac451, "fc_disc_config" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x29f6077, "fc_elsct_init" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x95a7472f, "fc_vport_id_lookup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x785dd9f2, "device_register" },
	{ 0xba312d7b, "current_task" },
	{ 0x78b3951c, "__ethtool_get_link_ksettings" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0x8f787eef, "fc_exch_recv" },
	{ 0xb680c7cb, "fc_lport_set_local_id" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3785c132, "init_net" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x10e17b49, "fc_lport_reset" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x73360290, "fc_linkdown" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2d280b37, "fc_rport_login" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4924f6dd, "fc_disc_init" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2b929f91, "fc_rport_logoff" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x9d50ed7e, "fc_rport_destroy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaddc3567, "fc_lport_init" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3fa55769, "__put_page" },
	{ 0x6088321e, "dev_get_stats" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xd59dcd47, "fc_rport_lookup" },
};

MODULE_INFO(depends, "libfc");


MODULE_INFO(srcversion, "D41BCF57E330A1BD6EEEEF6");
