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
	{ 0xe9c8444e, "skcipher_register_instance" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbbbc04cd, "crypto_inst_setname" },
	{ 0x77c901f1, "crypto_grab_skcipher" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0x37a0cba, "kfree" },
	{ 0x91995e29, "crypto_drop_spawn" },
	{ 0x5f8d7e91, "crypto_spawn_tfm2" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x3755f990, "gf128mul_init_64k_bbe" },
	{ 0xd60736ec, "gf128mul_free_64k" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf41f70d6, "skcipher_walk_done" },
	{ 0x11ed109f, "skcipher_walk_virt" },
	{ 0x5e373fb4, "gf128mul_64k_bbe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6329594E1368EA718E8763F");
