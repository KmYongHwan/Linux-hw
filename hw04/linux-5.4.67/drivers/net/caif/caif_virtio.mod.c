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
	{ 0x3fadea45, "unregister_virtio_driver" },
	{ 0xd66cd0b1, "register_virtio_driver" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x5cdf37d0, "virtqueue_detach_unused_buf" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x99c91e4d, "virtqueue_enable_cb" },
	{ 0x747ba3cd, "virtqueue_kick" },
	{ 0xbdfe9390, "virtqueue_add_outbuf" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5af926e0, "virtqueue_disable_cb" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe9f14282, "virtqueue_get_buf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xdf154fe, "virtqueue_get_vring_size" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x2b593aa8, "gen_pool_alloc_algo_owner" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x4d7e3b8b, "vringh_need_notify_kern" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe42f476d, "vringh_notify_disable_kern" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x1ad4f052, "vringh_notify_enable_kern" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x15314fce, "consume_skb" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdc2d9f94, "vringh_getdesc_kern" },
	{ 0x29cea78, "vringh_complete_kern" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf04187ce, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vringh");

MODULE_ALIAS("virtio:d0000000Cv*");

MODULE_INFO(srcversion, "374AD212A8783231639DC47");
