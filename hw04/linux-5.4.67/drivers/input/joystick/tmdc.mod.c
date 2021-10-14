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
	{ 0x405d3ae, "gameport_unregister_driver" },
	{ 0x605fd2ff, "__gameport_register_driver" },
	{ 0x4ce1fc83, "gameport_start_polling" },
	{ 0xcb622238, "gameport_stop_polling" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x35081cec, "gameport_open" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5ada0011, "input_event" },
	{ 0x75c58d98, "gameport_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");


MODULE_INFO(srcversion, "AB58FA80F5C7859BAEE6794");
