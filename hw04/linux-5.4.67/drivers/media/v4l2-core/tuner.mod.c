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
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0xc5850110, "printk" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "mc,videodev");

MODULE_ALIAS("i2c:tuner");

MODULE_INFO(srcversion, "6BC473D9B27A9E6FDF2279E");
