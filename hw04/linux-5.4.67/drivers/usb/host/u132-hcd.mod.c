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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x55d40be2, "usb_hcd_link_urb_to_ep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6659fdb, "usb_ftdi_elan_edset_single" },
	{ 0x39097903, "usb_ftdi_elan_edset_setup" },
	{ 0x39c689fa, "usb_ftdi_elan_edset_flush" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0x9c8cf3a7, "usb_add_hcd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa3e81544, "usb_create_hcd" },
	{ 0x194ffc53, "ftdi_elan_gone_away" },
	{ 0x854d740b, "usb_hc_died" },
	{ 0xbc5d28ab, "usb_hcd_check_unlink_urb" },
	{ 0x1fa78102, "usb_ftdi_elan_edset_output" },
	{ 0x69b2265a, "usb_ftdi_elan_edset_empty" },
	{ 0x15121d5d, "usb_ftdi_elan_edset_input" },
	{ 0x9a608ef0, "usb_hcd_giveback_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd363d3b8, "usb_hcd_unlink_urb_from_ep" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdc49780f, "usb_ftdi_elan_write_pcimem" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a0d31c, "usb_ftdi_elan_read_pcimem" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ftdi-elan");


MODULE_INFO(srcversion, "E2595327C4177A544079E32");
