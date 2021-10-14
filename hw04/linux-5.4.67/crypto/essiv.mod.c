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
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x62eb7050, "aead_register_instance" },
	{ 0xc5850110, "printk" },
	{ 0xc8bd3f9e, "crypto_grab_aead" },
	{ 0xe9c8444e, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80f91735, "crypto_mod_put" },
	{ 0x9ecc1858, "shash_no_setkey" },
	{ 0xf5893d49, "crypto_alg_mod_lookup" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x77c901f1, "crypto_grab_skcipher" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xacde0476, "crypto_shash_digest" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4bb2942f, "crypto_shash_finup" },
	{ 0xd25eb83e, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x5f8d7e91, "crypto_spawn_tfm2" },
	{ 0x59a11eaf, "crypto_alloc_shash" },
	{ 0x3d501063, "crypto_alloc_base" },
	{ 0x91995e29, "crypto_drop_spawn" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "075FFB328395C9565264369");
