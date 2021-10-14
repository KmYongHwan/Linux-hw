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
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x329de697, "dvb_create_media_graph" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xef08fed7, "vb2_thread_start" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0xe788cf4f, "vb2_thread_stop" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3927325, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core,videobuf2-common");


MODULE_INFO(srcversion, "C2B610DF7F0C1421310AD47");
