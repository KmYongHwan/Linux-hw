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
	{ 0xd432c573, "crypto_unregister_template" },
	{ 0x21c22cea, "crypto_register_template" },
	{ 0x7e8685, "crypto_ahash_setkey" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x62eb7050, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x80f91735, "crypto_mod_put" },
	{ 0x77c901f1, "crypto_grab_skcipher" },
	{ 0xde6b1f3d, "crypto_init_ahash_spawn" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xd2b1b972, "ahash_attr_alg" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x91995e29, "crypto_drop_spawn" },
	{ 0xc5f5d076, "crypto_get_default_null_skcipher" },
	{ 0x5f8d7e91, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x5d3ce2e, "crypto_ahash_digest" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "5FDD8192473912DE9317E23");
