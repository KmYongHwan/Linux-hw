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
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0x87b8798d, "sg_next" },
	{ 0x24d030e3, "crypto_ahash_finup" },
	{ 0x7b4081ac, "crypto_stats_ahash_update" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc8bd3f9e, "crypto_grab_aead" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x62eb7050, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77c901f1, "crypto_grab_skcipher" },
	{ 0xde6b1f3d, "crypto_init_ahash_spawn" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc6b33289, "crypto_find_alg" },
	{ 0xdd0c05b9, "crypto_ahash_type" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xec2f17b8, "shash_register_instance" },
	{ 0x80f91735, "crypto_mod_put" },
	{ 0x15b6a31b, "shash_free_instance" },
	{ 0x6094313f, "crypto_init_spawn" },
	{ 0x6ccb1ce7, "crypto_alloc_instance" },
	{ 0x72b89a87, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x1ae941bf, "crypto_spawn_tfm" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x7e8685, "crypto_ahash_setkey" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x91995e29, "crypto_drop_spawn" },
	{ 0x5f8d7e91, "crypto_spawn_tfm2" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x69acdf38, "memcpy" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A4F7A69BE8413A9297F404D");
