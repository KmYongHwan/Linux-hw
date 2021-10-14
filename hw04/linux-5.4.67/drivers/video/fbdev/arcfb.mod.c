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
	{ 0x3f1d7510, "fb_sys_read" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ca9c8c8, "sys_fillrect" },
	{ 0xd20419ad, "sys_copyarea" },
	{ 0xbee25412, "sys_imageblit" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xba312d7b, "current_task" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x999e8297, "vfree" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");


MODULE_INFO(srcversion, "B2B8A1B8313F52CC9F00021");
