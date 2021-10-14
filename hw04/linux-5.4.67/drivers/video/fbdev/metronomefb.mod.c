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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xe82c0073, "fb_deferred_io_init" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x2ca9c8c8, "sys_fillrect" },
	{ 0xd20419ad, "sys_copyarea" },
	{ 0xbee25412, "sys_imageblit" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xf720a60b, "module_put" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xc4c503e9, "fb_deferred_io_cleanup" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sysfillrect,syscopyarea,sysimgblt");


MODULE_INFO(srcversion, "63DCED94C20FEA0BB647A87");
