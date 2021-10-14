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
	{ 0xe7eebd33, "crypto_unregister_scomp" },
	{ 0xf24963f2, "crypto_unregister_alg" },
	{ 0x59f682bf, "crypto_register_scomp" },
	{ 0x77cc64fa, "crypto_register_alg" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xddf86133, "LZ4_compress_HC" },
	{ 0xc7c1107a, "LZ4_decompress_safe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lz4hc_compress");


MODULE_INFO(srcversion, "79BE1D91FFA1E1B1BB40003");
