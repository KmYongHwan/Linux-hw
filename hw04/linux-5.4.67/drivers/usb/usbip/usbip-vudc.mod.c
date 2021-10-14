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
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xcdf2263e, "kernel_sendmsg" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x931d7e9f, "usbip_alloc_iso_desc_pdu" },
	{ 0x9286c9fc, "usb_del_gadget_udc" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe70f135d, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xde843921, "usb_gadget_udc_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x73d0e3ae, "kernel_sock_shutdown" },
	{ 0xfe573607, "usbip_stop_eh" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa0fd0123, "fput" },
	{ 0xd6bad41, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5ebb3cc5, "usbip_recv" },
	{ 0xaf01bb80, "usb_add_gadget_udc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0xc0af0f07, "wake_up_process" },
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
	{ 0x69acdf38, "memcpy" },
	{ 0xbd0b3811, "usbip_recv_xbuff" },
	{ 0x5c84462b, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xa707d472, "usbip_start_eh" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xc63b180c, "usbip_pack_pdu" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xf5ee1308, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core,udc-core");


MODULE_INFO(srcversion, "11AFC1F4135F0A5E9EBFA4E");
