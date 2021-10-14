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
	{ 0x80868ed7, "transport_class_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2d6e4a02, "scsi_remove_target" },
	{ 0xee6537d9, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5b0f9990, "scsi_flush_work" },
	{ 0x596078d9, "blk_mq_run_hw_queues" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x20592044, "transport_destroy_device" },
	{ 0x79102621, "bsg_job_put" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf0b30789, "attribute_container_unregister" },
	{ 0x3a5f56f, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0xa269922f, "bsg_job_get" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x84e1777c, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2e0c5381, "transport_add_device" },
	{ 0xc5850110, "printk" },
	{ 0xbca4d3b0, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x4beaf2ec, "attribute_container_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0xb6f7270a, "device_add" },
	{ 0xda6ec6cc, "transport_class_unregister" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x5f4c3621, "scsi_target_unblock" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xa3130988, "scsi_host_get" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0x7ea19302, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe6492f49, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe8db7f67, "blk_mq_end_request" },
	{ 0x963cf8c8, "get_device" },
	{ 0x74fb69f1, "__scsi_init_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xf480d24c, "scsi_is_target_device" },
	{ 0x6b9c16a7, "scsi_nl_sock" },
	{ 0x5d14d1b1, "transport_remove_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x129de197, "scsi_target_block" },
	{ 0x2bd183b2, "bsg_job_done" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xc829a825, "bsg_remove_queue" },
	{ 0x1f259270, "bsg_setup_queue" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "933B32C63DC87EA8829348F");
