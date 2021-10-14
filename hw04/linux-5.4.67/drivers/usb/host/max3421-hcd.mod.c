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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5850110, "printk" },
	{ 0x9a608ef0, "usb_hcd_giveback_urb" },
	{ 0xd363d3b8, "usb_hcd_unlink_urb_from_ep" },
	{ 0x1000e51, "schedule" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xba312d7b, "current_task" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9c8cf3a7, "usb_add_hcd" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xa3e81544, "usb_create_hcd" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x55d40be2, "usb_hcd_link_urb_to_ep" },
	{ 0xbc5d28ab, "usb_hcd_check_unlink_urb" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x996c2d4c, "usb_hcd_resume_root_hub" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max3421");
MODULE_ALIAS("of:N*T*Cmaxim,max3421C*");

MODULE_INFO(srcversion, "07F62603A04395523C76866");
