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
	{ 0xc5850110, "printk" },
	{ 0x80f91735, "crypto_mod_put" },
	{ 0xe9c8444e, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8f10df61, "crypto_init_shash_spawn" },
	{ 0xf5893d49, "crypto_alg_mod_lookup" },
	{ 0x866bdc21, "crypto_grab_spawn" },
	{ 0x77c901f1, "crypto_grab_skcipher" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3bf58509, "crypto_shash_setkey" },
	{ 0x299fbb2e, "poly1305_core_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc2e3aba0, "crypto_req_done" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ae941bf, "crypto_spawn_tfm" },
	{ 0x5f8d7e91, "crypto_spawn_tfm2" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5ef1870c, "poly1305_core_emit" },
	{ 0x30dbed6e, "poly1305_core_blocks" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a4178b2, "crypto_shash_final" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0xd25eb83e, "crypto_shash_update" },
	{ 0xde006432, "sg_miter_next" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x91995e29, "crypto_drop_spawn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "poly1305_generic");


MODULE_INFO(srcversion, "0CFA9C31CB7A713DB33B85D");
