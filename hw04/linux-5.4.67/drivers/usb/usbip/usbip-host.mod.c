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
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeac913f2, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xcdf2263e, "kernel_sendmsg" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x754d539c, "strlen" },
	{ 0x966405d8, "usb_set_configuration" },
	{ 0x931d7e9f, "usbip_alloc_iso_desc_pdu" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x25f4f08c, "usb_hub_claim_port" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xe70f135d, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x66aa561, "usbip_in_eh" },
	{ 0x299bfb12, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0x96258d44, "usb_register_device_driver" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x73d0e3ae, "kernel_sock_shutdown" },
	{ 0x7d2d038c, "device_attach" },
	{ 0xfe573607, "usbip_stop_eh" },
	{ 0xb0183922, "dev_attr_usbip_debug" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa0fd0123, "fput" },
	{ 0xd6bad41, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xabe69f86, "usbip_dump_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xfa52aa89, "driver_create_file" },
	{ 0x5ebb3cc5, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40555496, "usb_reset_device" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9a161be, "usb_deregister_device_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbd0b3811, "usbip_recv_xbuff" },
	{ 0x3ab9099c, "usb_hub_release_port" },
	{ 0x5c84462b, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc35a23d5, "driver_remove_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa707d472, "usbip_start_eh" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xc63b180c, "usbip_pack_pdu" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "A706755C3797B38D095777B");
