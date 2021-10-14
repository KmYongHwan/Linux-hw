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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcfb55cfd, "target_submit_cmd_map_sgls" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf89bb7da, "iov_iter_npages" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x5d01e3da, "vhost_work_flush" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xec3f8302, "target_put_sess_cmd" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0x9989b06a, "core_tpg_register" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x311906ab, "transport_generic_free_cmd" },
	{ 0xd301c59e, "target_register_template" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xf14f2bdc, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd47de69d, "vhost_dev_cleanup" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99c2237b, "vhost_log_access_ok" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x5562e02c, "vhost_enable_notify" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc93509c6, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6e0e2832, "vhost_disable_notify" },
	{ 0x47fda759, "misc_register" },
	{ 0xa0359a84, "vhost_signal" },
	{ 0x96284d03, "vhost_dev_ioctl" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xe3cba01d, "iov_iter_get_pages" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb6d69dec, "vhost_get_vq_desc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x752832c, "noop_llseek" },
	{ 0xb6a4642a, "target_remove_session" },
	{ 0x4aba33e0, "vhost_work_queue" },
	{ 0xa0a33638, "target_undepend_item" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x187e0ce4, "vhost_add_used_and_signal" },
	{ 0x14856e3a, "target_setup_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0x5e08bd7b, "transport_send_check_condition_and_sense" },
	{ 0x575edfc, "target_unregister_template" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa79ee4e8, "vhost_exceeds_weight" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x4eb108eb, "vhost_vq_init_access" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xbe903a1e, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1158c1dd, "vhost_dev_init" },
	{ 0xf5524491, "iov_iter_advance" },
	{ 0x130a6505, "vhost_dev_stop" },
	{ 0xd945c5f7, "vhost_vq_access_ok" },
	{ 0xef30deac, "target_execute_cmd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd76fc679, "vhost_vring_ioctl" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa3e0819b, "target_depend_item" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3fa55769, "__put_page" },
	{ 0xab255ad6, "vhost_add_used" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "target_core_mod,vhost");


MODULE_INFO(srcversion, "47121CDF8362E3FC1788EB9");
