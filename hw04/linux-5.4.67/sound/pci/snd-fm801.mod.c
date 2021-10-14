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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x13b376c9, "snd_opl3_hwdep_new" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0xf0de439, "snd_mpu401_uart_new" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x7ae59384, "snd_tea575x_set_freq" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x5792f848, "strlcpy" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0xacc21c79, "snd_ac97_suspend" },
	{ 0x65523885, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe17dcab, "snd_ac97_bus" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x698f6d3a, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9afcdd42, "snd_ac97_mixer" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x6ebc2d2, "snd_tea575x_init" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x1460456f, "snd_tea575x_exit" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x82351cde, "snd_pcm_add_chmap_ctls" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x27ad78fd, "snd_ac97_resume" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-opl3-lib,videodev,snd-mpu401-uart,snd,tea575x,snd-ac97-codec");

MODULE_ALIAS("pci:v00001319d00000801sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v00005213d00000510sv*sd*bc04sc01i*");

MODULE_INFO(srcversion, "3A77186062A4260077BE458");
