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
	{ 0xeac913f2, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2367951d, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xcdf2263e, "kernel_sendmsg" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x9c8cf3a7, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xa3e81544, "usb_create_hcd" },
	{ 0x306270cd, "usb_hcd_poll_rh_status" },
	{ 0x931d7e9f, "usbip_alloc_iso_desc_pdu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9a608ef0, "usb_hcd_giveback_urb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0xe70f135d, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2c373ead, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x55d40be2, "usb_hcd_link_urb_to_ep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x73d0e3ae, "kernel_sock_shutdown" },
	{ 0xfe573607, "usbip_stop_eh" },
	{ 0xb0183922, "dev_attr_usbip_debug" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa0fd0123, "fput" },
	{ 0xd6bad41, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfccd6d15, "usbip_pad_iso" },
	{ 0xbc5d28ab, "usb_hcd_check_unlink_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xabe69f86, "usbip_dump_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x5ebb3cc5, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8e77175d, "platform_bus" },
	{ 0x6cbe5161, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd0b3811, "usbip_recv_xbuff" },
	{ 0x5c84462b, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xd363d3b8, "usb_hcd_unlink_urb_from_ep" },
	{ 0x996c2d4c, "usb_hcd_resume_root_hub" },
	{ 0xa707d472, "usbip_start_eh" },
	{ 0xc63b180c, "usbip_pack_pdu" },
	{ 0xf5ee1308, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "BB7D416D2CA2313C409FEF1");
