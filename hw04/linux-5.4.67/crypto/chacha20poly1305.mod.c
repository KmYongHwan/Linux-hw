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
	{ 0x81670675, "crypto_unregister_templates" },
	{ 0x33f0c918, "crypto_register_templates" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0x62eb7050, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77c901f1, "crypto_grab_skcipher" },
	{ 0xde6b1f3d, "crypto_init_ahash_spawn" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x80f91735, "crypto_mod_put" },
	{ 0xc6b33289, "crypto_find_alg" },
	{ 0xdd0c05b9, "crypto_ahash_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x91995e29, "crypto_drop_spawn" },
	{ 0x5f8d7e91, "crypto_spawn_tfm2" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x7b4081ac, "crypto_stats_ahash_update" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0x24d030e3, "crypto_ahash_finup" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8640B5F10DADE67920A80CE");
