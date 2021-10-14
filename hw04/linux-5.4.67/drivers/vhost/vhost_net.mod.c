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
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x1f049dd, "vhost_vq_avail_empty" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x3dfae1cf, "vhost_dev_check_owner" },
	{ 0x37c1037c, "vq_meta_prefetch" },
	{ 0xd17e4a5f, "vhost_poll_start" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x67552063, "vhost_chr_poll" },
	{ 0xa6841fb6, "tun_ptr_to_xdp" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd47de69d, "vhost_dev_cleanup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99c2237b, "vhost_log_access_ok" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x72e6e907, "__page_frag_cache_drain" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x425c1719, "copy_page_from_iter" },
	{ 0x5562e02c, "vhost_enable_notify" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x412d3bd2, "vhost_dev_has_owner" },
	{ 0xc93509c6, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6e0e2832, "vhost_disable_notify" },
	{ 0x47fda759, "misc_register" },
	{ 0x96284d03, "vhost_dev_ioctl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x160ff9fb, "vhost_log_write" },
	{ 0x2f99ec1a, "vhost_chr_read_iter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb6d69dec, "vhost_get_vq_desc" },
	{ 0x752832c, "noop_llseek" },
	{ 0xac00ab32, "vhost_chr_write_iter" },
	{ 0x3ea77318, "vhost_dev_set_owner" },
	{ 0x6515754d, "vhost_add_used_and_signal_n" },
	{ 0x4b54fc7f, "vhost_dev_reset_owner_prepare" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa0fd0123, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x187e0ce4, "vhost_add_used_and_signal" },
	{ 0x61ec3920, "vhost_discard_vq_desc" },
	{ 0x729c9c61, "tun_get_socket" },
	{ 0x36503bdb, "vhost_poll_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa79ee4e8, "vhost_exceeds_weight" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9bea0974, "tun_get_tx_ring" },
	{ 0xcd6fa81d, "vhost_poll_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4eb108eb, "vhost_vq_init_access" },
	{ 0x2e60ed93, "vhost_poll_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbe903a1e, "iov_iter_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bacaf59, "vhost_dev_reset_owner" },
	{ 0xd8602b6a, "tun_is_xdp_frame" },
	{ 0x2e878cde, "vhost_has_work" },
	{ 0x1158c1dd, "vhost_dev_init" },
	{ 0xe35580fb, "fget" },
	{ 0xf5524491, "iov_iter_advance" },
	{ 0x2fccc40b, "tap_get_socket" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x130a6505, "vhost_dev_stop" },
	{ 0xd945c5f7, "vhost_vq_access_ok" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0xeb089152, "tap_get_ptr_ring" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd76fc679, "vhost_vring_ioctl" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x469f356d, "vhost_init_device_iotlb" },
	{ 0xceb66bec, "sched_clock_cpu" },
};

MODULE_INFO(depends, "vhost,tap");


MODULE_INFO(srcversion, "4B35398A69CC3275397D037");
