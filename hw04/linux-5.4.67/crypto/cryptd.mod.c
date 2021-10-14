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
	{ 0xe6f812f0, "crypto_alloc_skcipher" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa8edcf3b, "ahash_register_instance" },
	{ 0x9ae8cff6, "shash_attr_alg" },
	{ 0x80f91735, "crypto_mod_put" },
	{ 0x5bd4095d, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xaa45c4bd, "shash_ahash_digest" },
	{ 0x77c901f1, "crypto_grab_skcipher" },
	{ 0xd432c573, "crypto_unregister_template" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x6a4178b2, "crypto_shash_final" },
	{ 0xba3a0002, "shash_ahash_finup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe9c8444e, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0xc8bd3f9e, "crypto_grab_aead" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x21c22cea, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3bf58509, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x91995e29, "crypto_drop_spawn" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x974e329f, "crypto_enqueue_request" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x63344450, "crypto_alloc_aead" },
	{ 0x5f8d7e91, "crypto_spawn_tfm2" },
	{ 0x8f10df61, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xd46156bf, "shash_ahash_update" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ecc1858, "shash_no_setkey" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x62eb7050, "aead_register_instance" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9bc39af7, "crypto_alloc_ahash" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B92958244A46F1B5220BCEF");
