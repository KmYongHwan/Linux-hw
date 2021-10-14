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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaadd771f, "snd_hda_gen_free" },
	{ 0x9f7a6835, "snd_hdac_codec_read" },
	{ 0xcd85dcf0, "snd_hda_gen_parse_auto_config" },
	{ 0x237ee955, "snd_hda_apply_fixup" },
	{ 0x9b92f258, "snd_hda_pick_fixup" },
	{ 0xbaa47330, "snd_hda_gen_build_pcms" },
	{ 0xe445e339, "snd_hda_jack_unsol_event" },
	{ 0x4ee9a127, "snd_hda_codec_set_pincfg" },
	{ 0x898bd703, "snd_hda_gen_update_outputs" },
	{ 0x2d3d809, "snd_hda_jack_detect_enable_callback" },
	{ 0x1ee003fb, "_snd_hda_set_pin_ctl" },
	{ 0x64721210, "snd_hda_gen_fix_pin_power" },
	{ 0x7fe5c1dc, "snd_hda_gen_init" },
	{ 0x967179b1, "snd_hda_parse_pin_defcfg" },
	{ 0x7363cbd1, "__hda_codec_driver_register" },
	{ 0x53dcce9e, "snd_hda_override_amp_caps" },
	{ 0xa87613e2, "snd_hda_jack_detect_state" },
	{ 0x9eb0e5fa, "snd_hda_find_mixer_ctl" },
	{ 0xe98a08f6, "snd_hda_sequence_write" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x7754a569, "snd_hda_gen_add_kctl" },
	{ 0x8fcfe29, "snd_hdac_codec_write" },
	{ 0x56e8d49b, "snd_hda_codec_get_pincfg" },
	{ 0xf16a62d1, "snd_hda_apply_pincfgs" },
	{ 0x511dd397, "hda_codec_driver_unregister" },
	{ 0xfb476272, "snd_hda_gen_spec_init" },
	{ 0x50a1cf45, "query_amp_caps" },
	{ 0x40984190, "snd_hda_gen_build_controls" },
	{ 0x90e60e6b, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-core,snd-hda-codec");

MODULE_ALIAS("hdaudio:v10134206r*a01*");
MODULE_ALIAS("hdaudio:v10134207r*a01*");
MODULE_ALIAS("hdaudio:v10134208r*a01*");
MODULE_ALIAS("hdaudio:v10134210r*a01*");
MODULE_ALIAS("hdaudio:v10134213r*a01*");

MODULE_INFO(srcversion, "51110F8B1C958510E0642E9");
