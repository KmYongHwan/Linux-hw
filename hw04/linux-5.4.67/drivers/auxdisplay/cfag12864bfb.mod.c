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
	{ 0xbee25412, "sys_imageblit" },
	{ 0xd20419ad, "sys_copyarea" },
	{ 0x2ca9c8c8, "sys_fillrect" },
	{ 0xcf2bd7dd, "fb_sys_write" },
	{ 0x3f1d7510, "fb_sys_read" },
	{ 0xecb2e5d, "cfag12864b_disable" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3389f926, "cfag12864b_enable" },
	{ 0x2ff9464, "cfag12864b_isinited" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x103b037d, "vm_map_pages_zero" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5850110, "printk" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xc48e9d95, "cfag12864b_buffer" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sysimgblt,syscopyarea,sysfillrect,fb_sys_fops,cfag12864b");


MODULE_INFO(srcversion, "492E23B4176913D75EE9A2D");
