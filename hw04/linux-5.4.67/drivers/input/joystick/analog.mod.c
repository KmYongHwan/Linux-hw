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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x405d3ae, "gameport_unregister_driver" },
	{ 0x605fd2ff, "__gameport_register_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x35081cec, "gameport_open" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x4ce1fc83, "gameport_start_polling" },
	{ 0xcb622238, "gameport_stop_polling" },
	{ 0x5ada0011, "input_event" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x75c58d98, "gameport_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");


MODULE_INFO(srcversion, "ED7074AEBE21608B116BC5F");
